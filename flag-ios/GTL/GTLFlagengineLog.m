/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2014 Google Inc.
 */

//
//  GTLFlagengineLog.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   flagengine/v1
// Description:
//   This is an API
// Classes:
//   GTLFlagengineLog (0 custom class methods, 7 custom properties)

#import "GTLFlagengineLog.h"

// ----------------------------------------------------------------------------
//
//   GTLFlagengineLog
//

@implementation GTLFlagengineLog
@dynamic category, createdAt, identifier, statusCode, subject, target, value;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
  return map;
}

@end