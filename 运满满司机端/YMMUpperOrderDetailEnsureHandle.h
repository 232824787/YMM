//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableAttributedString, NSString;

@interface YMMUpperOrderDetailEnsureHandle : NSObject
{
    NSString *_ensureImageURLString;
    NSMutableAttributedString *_ensureAtt;
    double _ensureCellHeight;
    CDUnknownBlockType _tap;
}

@property(copy, nonatomic) CDUnknownBlockType tap; // @synthesize tap=_tap;
@property(nonatomic) double ensureCellHeight; // @synthesize ensureCellHeight=_ensureCellHeight;
@property(retain, nonatomic) NSMutableAttributedString *ensureAtt; // @synthesize ensureAtt=_ensureAtt;
@property(copy, nonatomic) NSString *ensureImageURLString; // @synthesize ensureImageURLString=_ensureImageURLString;
- (void).cxx_destruct;

@end

