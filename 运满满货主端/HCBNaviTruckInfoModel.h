//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface HCBNaviTruckInfoModel : NSObject <NSCoding>
{
    NSString *_vehicleId;
    NSString *_plateNumberType;
    long long _type;
    long long _size;
    long long _axisNums;
    double _width;
    double _height;
    double _length;
    double _load;
    double _weight;
    unsigned long long _updateId;
}

+ (id)getInfoFromLocal;
+ (id)dicToModel:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long updateId; // @synthesize updateId=_updateId;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) double load; // @synthesize load=_load;
@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long axisNums; // @synthesize axisNums=_axisNums;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *plateNumberType; // @synthesize plateNumberType=_plateNumberType;
@property(retain, nonatomic) NSString *vehicleId; // @synthesize vehicleId=_vehicleId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)saveToUserDefault;

@end

