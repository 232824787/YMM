//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface HCBQueryYMMNaviStatusModel : NSObject
{
    long long _status;
    NSString *_statusDesc;
    NSString *_bottomButtonName;
    NSString *_tips;
    NSString *_toast;
    NSArray *_addressArr;
    NSArray *_buttonsArr;
}

+ (id)dicToModel:(id)arg1;
@property(retain, nonatomic) NSArray *buttonsArr; // @synthesize buttonsArr=_buttonsArr;
@property(retain, nonatomic) NSArray *addressArr; // @synthesize addressArr=_addressArr;
@property(copy, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *bottomButtonName; // @synthesize bottomButtonName=_bottomButtonName;
@property(copy, nonatomic) NSString *statusDesc; // @synthesize statusDesc=_statusDesc;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

