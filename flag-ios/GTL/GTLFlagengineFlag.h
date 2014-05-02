/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2014 Google Inc.
 */

//
//  GTLFlagengineFlag.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   flagengine/v1
// Description:
//   This is an API
// Classes:
//   GTLFlagengineFlag (0 custom class methods, 7 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLFlagengineFlag
//

@interface GTLFlagengineFlag : GTLObject
@property (retain) NSNumber *createdAt;  // longLongValue

// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSNumber *identifier;  // longLongValue

@property (retain) NSNumber *lat;  // doubleValue
@property (retain) NSNumber *lon;  // doubleValue
@property (retain) NSNumber *shopId;  // longLongValue
@property (copy) NSString *shopName;
@property (retain) NSNumber *shopType;  // intValue
@end