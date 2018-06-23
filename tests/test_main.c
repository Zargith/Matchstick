/*
** EPITECH PROJECT, 2018
** test_main.c
** File description:
** Tests main function.
*/

#include <criterion/criterion.h>
#include "my.h"
#include "matchstick.h"

Test (main_test, test_main)
{
	char **av = { {"./matchstick"}, {"-1"}, {"1"}};

	cr_expect_eq(main(3, av), 84);
}
