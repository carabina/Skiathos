//
//  ADBDALService+Helpers.h
// 
//
//  Created by Alberto De Bortoli on 26/07/2016.
//  Copyright © 2016 Alberto De Bortoli. All rights reserved.
//

#import "ADBDALService.h"

@interface ADBDALService (Helpers)

+ (instancetype)sqliteStackWithDataModelFileName:(NSString *)dataModelFileName;
+ (instancetype)inMemoryStackWithDataModelFileName:(NSString *)dataModelFileName;

@end