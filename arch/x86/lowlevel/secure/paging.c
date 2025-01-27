/**
 * @file paging.c
 * @author Арен Елчинян (a2.dev@yandex.com)
 * @brief Страничная адресация
 * @version 0.1.0
 * @date 06-02-2023
 *
 * @license This work is licensed under the Creative Commons  Attribution-NonCommercial 4.0 International (CC BY-NC 4.0)  License.
 * @copyright Арен Елчинян (c) 2022 - 2023
 *
 */

#include <arch.h>
#include <libk.h>

uintptr_t *kernel_page_dir = (uintptr_t*)KERNEL_PAGE_TABLE;

void paging_init() {
}