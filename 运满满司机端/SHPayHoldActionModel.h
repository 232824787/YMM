//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface SHPayHoldActionModel : YMMCommonModel
{
    long long _buttonType;
    NSString *_buttonUrl;
    NSString *_buttonTxt;
    NSString *_buttonDesc;
}

@property(copy, nonatomic) NSString *buttonDesc; // @synthesize buttonDesc=_buttonDesc;
@property(copy, nonatomic) NSString *buttonTxt; // @synthesize buttonTxt=_buttonTxt;
@property(copy, nonatomic) NSString *buttonUrl; // @synthesize buttonUrl=_buttonUrl;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
- (void).cxx_destruct;

@end

