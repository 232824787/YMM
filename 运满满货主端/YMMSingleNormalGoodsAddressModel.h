//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString, YMMGoodsAddressCoordinateModel;

@interface YMMSingleNormalGoodsAddressModel : YMMCommonModel
{
    NSString *_name;
    NSString *_address;
    YMMGoodsAddressCoordinateModel *_coordinate;
}

@property(retain, nonatomic) YMMGoodsAddressCoordinateModel *coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

