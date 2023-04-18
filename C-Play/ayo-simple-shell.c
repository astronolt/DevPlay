#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

char **parse_command(char *command)
{
		char **argv;
			char *tok;
				int i = 0;

					argv = calloc(4, sizeof(char *));
						tok = strtok(command, " ");
							while (tok != NULL)
									{
												argv[i] = tok;
														tok = strtok(NULL, " ");
																i++;
																	}
								argv[i] = NULL;
									return (argv);
}

/**
 *  * main - fork & wait example
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{

		char *lineptr = NULL;
			size_t line_len = 0;
				pid_t pid;
					char **argv;
						int status;
							size_t n = 0;

								while (1)
										{
													printf("#cisfun$ ");
															if (getline(&lineptr, &n, stdin) == -1)
																		{
																						perror("Failed");
																									free(lineptr);
																												exit(1);
																														}

																	line_len = strlen(lineptr);
																			lineptr[line_len - 1] = '\0';

																					argv = parse_command(lineptr);

																							pid = fork();
																									if (pid == -1)
																												{
																																perror("Error");
																																			exit(1);
																																					}
																											if (pid == 0)
																														{
																																		if (execve(argv[0], argv, NULL) == -1)
																																							perror("Error");
																																				}
																													else if (wait(&status) == -1)
																																{
																																				perror("Child Error");
																																							exit(1);
																																									}
																														}

									free(lineptr);
										return (0);
}
