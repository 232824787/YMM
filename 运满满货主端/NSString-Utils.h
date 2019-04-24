//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (Utils)
+ (_Bool)isNilOrEmpty:(id)arg1;
- (id)attributedWithHighlightString:(id)arg1 withHightlightColor:(id)arg2;
- (id)attributeString:(id)arg1 color:(id)arg2 font:(id)arg3;
- (_Bool)isPureInt;
- (id)telephoneString;
- (id)filterForTelephone;
- (void)newCallTelephone;
- (void)callNoAlertTelephone;
- (void)makePhoneCall;
- (_Bool)stringContainsEmoji;
- (_Bool)emojiInSoftBankUnicode:(short)arg1;
- (_Bool)emojiInUnicode:(short)arg1;
- (long long)getTextLength;
- (id)disable_emoji;
- (struct CGSize)textSizeWithHeight:(double)arg1 withFont:(id)arg2;
- (struct CGSize)getTextHeight:(double)arg1 withFont:(id)arg2;
- (double)getTextWidthByFont:(id)arg1;
- (double)getTextWidth:(double)arg1;
@end

