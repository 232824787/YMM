//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface HCBFont : NSObject
{
    NSDictionary *_fontDict;
}

+ (id)fontWithSize:(long long)arg1 weight:(double)arg2;
+ (id)fontWithSize:(long long)arg1;
+ (id)biggestFontWithWeight:(double)arg1;
+ (id)biggestFont;
+ (id)biggerFontWithWeight:(double)arg1;
+ (id)biggerFont;
+ (id)bigFontWithWeight:(double)arg1;
+ (id)bigFont;
+ (id)normalFontWithWeight:(double)arg1;
+ (id)normalFont;
+ (id)moreNormalFontWithWeight:(double)arg1;
+ (id)moreNormalFont;
+ (id)mostNormalFontWithWeight:(double)arg1;
+ (id)mostNormalFont;
+ (id)smallFontWithWeight:(double)arg1;
+ (id)smallFont;
+ (id)smallerFontWithWeight:(double)arg1;
+ (id)smallerFont;
+ (id)smallestFontWithWeight:(double)arg1;
+ (id)smallestFont;
+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *fontDict; // @synthesize fontDict=_fontDict;
- (void).cxx_destruct;

@end

