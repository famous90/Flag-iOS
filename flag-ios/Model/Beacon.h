//
//  Beacon.h
//  flag-ios
//
//  Created by Gyuyoung Hwang on 2014. 3. 19..
//
//

#import <Foundation/Foundation.h>

@interface Beacon : NSObject

// sync to core data
@property (nonatomic, strong) NSString *beaconId;
@property (nonatomic, strong) NSNumber *shopId;
@property (nonatomic, strong) NSString *shopName;
@property (nonatomic, strong) NSNumber *latitude;
@property (nonatomic, strong) NSNumber *longitude;
@property (nonatomic, strong) NSDate *lastScanTime;

// not
@property (nonatomic, strong) NSNumber *flagId;
@property (nonatomic, strong) NSNumber *createdAt;

- (id)initWithData:(id)data;
- (id)initWithManagedObject:(NSManagedObject *)object;

@end
