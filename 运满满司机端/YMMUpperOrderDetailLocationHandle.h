//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableAttributedString, NSString, UIColor;

@interface YMMUpperOrderDetailLocationHandle : NSObject
{
    NSString *_title;
    NSMutableAttributedString *_timeAtt;
    NSMutableAttributedString *_locationAtt;
    NSMutableAttributedString *_statusAtt;
    NSString *_statusDetailAtt;
    UIColor *_statusColor;
}

@property(retain, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(copy, nonatomic) NSString *statusDetailAtt; // @synthesize statusDetailAtt=_statusDetailAtt;
@property(copy, nonatomic) NSMutableAttributedString *statusAtt; // @synthesize statusAtt=_statusAtt;
@property(copy, nonatomic) NSMutableAttributedString *locationAtt; // @synthesize locationAtt=_locationAtt;
@property(retain, nonatomic) NSMutableAttributedString *timeAtt; // @synthesize timeAtt=_timeAtt;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

