//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface YMMCargoMemberAlertButtonModel : NSObject
{
    NSString *_btnTitle;
    UIFont *_btnTitleFont;
    UIColor *_bgColor;
    UIColor *_titleColor;
    NSString *_url;
    CDUnknownBlockType _clickCallback;
}

@property(copy, nonatomic) CDUnknownBlockType clickCallback; // @synthesize clickCallback=_clickCallback;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIFont *btnTitleFont; // @synthesize btnTitleFont=_btnTitleFont;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
- (void).cxx_destruct;

@end

