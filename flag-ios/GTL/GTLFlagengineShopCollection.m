/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2014 Google Inc.
 */

//
//  GTLFlagengineShopCollection.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   flagengine/v1
// Description:
//   This is an API
// Classes:
//   GTLFlagengineShopCollection (0 custom class methods, 4 custom properties)

#import "GTLFlagengineShopCollection.h"

#import "GTLFlagengineFlag.h"
#import "GTLFlagengineJsonMap.h"
#import "GTLFlagengineShop.h"

// ----------------------------------------------------------------------------
//
//   GTLFlagengineShopCollection
//

@implementation GTLFlagengineShopCollection
@dynamic flags, pointMap, shops, statusCode;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLFlagengineFlag class], @"flags",
      [GTLFlagengineShop class], @"shops",
      nil];
  return map;
}

@end
