/*
 * Copyright 2012 ZXing authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <ZXingObjC/ZXResultParser.h>

/**
 * Implements KDDI AU's address book format. See http://www.au.kddi.com/ezfactory/tec/two_dimensions/index.html.
 * (Thanks to Yuzo for translating!)
 */
@interface ZXAddressBookAUResultParser : ZXResultParser

@end
