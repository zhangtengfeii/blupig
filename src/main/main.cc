/*
 * renju-parallel
 * Copyright (C) 2016 Yunzhu Li
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <protocols/cli.h>
#include <protocols/gomocup.h>

// Exclude main() if building with tests
#ifndef RENJU_PARALLEL_TEST

int main(int argc, char const *argv[]) {
    bool success;
    success = RenjuProtocolCLI::beginSession(argc, argv);
    // success = RenjuProtocolGomocup::beginSession(argc, argv);

    if (success) return 0;
    return 1;
}

#endif  // RENJU_PARALLEL_TEST
