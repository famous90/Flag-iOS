/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2014 Google Inc.
 */

//
//  GTLFlagenginePP.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   flagengine/v1
// Description:
//   This is an API
// Classes:
//   GTLFlagenginePP (0 custom class methods, 2 custom properties)

#import "GTLFlagenginePP.h"

#import "GTLFlagengineText.h"

// ----------------------------------------------------------------------------
//
//   GTLFlagenginePP
//

@implementation GTLFlagenginePP
@dynamic identifier, pp;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
  return map;
}

@end