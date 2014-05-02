/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2014 Google Inc.
 */

//
//  GTLFlagengineBeacon.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   flagengine/v1
// Description:
//   This is an API
// Classes:
//   GTLFlagengineBeacon (0 custom class methods, 7 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLFlagengineBeacon
//

@interface GTLFlagengineBeacon : GTLObject
@property (retain) NSNumber *createdAt;  // longLongValue
@property (retain) NSNumber *flagId;  // longLongValue

// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

@property (retain) NSNumber *lat;  // doubleValue
@property (retain) NSNumber *lon;  // doubleValue
@property (copy) NSString *name;
@property (retain) NSNumber *shopId;  // longLongValue
@end