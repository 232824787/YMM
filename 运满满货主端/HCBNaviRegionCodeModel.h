//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface HCBNaviRegionCodeModel : NSObject <NSCopying>
{
    NSString *_province;
    NSString *_pCode;
    NSString *_city;
    NSString *_cityCode;
    NSString *_district;
    NSString *_adCode;
}

+ (id)instancetWithProvince:(id)arg1 pCode:(id)arg2 city:(id)arg3 cityCode:(id)arg4 district:(id)arg5 adCode:(id)arg6;
@property(copy, nonatomic) NSString *adCode; // @synthesize adCode=_adCode;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *pCode; // @synthesize pCode=_pCode;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

