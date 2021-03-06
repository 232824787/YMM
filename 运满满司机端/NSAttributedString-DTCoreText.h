//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAttributedString.h"

@interface NSAttributedString (DTCoreText)
+ (id)prefixForListItemWithCounter:(unsigned long long)arg1 listStyle:(id)arg2 listIndent:(double)arg3 attributes:(id)arg4;
- (id)plainTextString;
- (id)htmlFragment;
- (id)htmlString;
- (struct _NSRange)rangeOfFieldAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfLinkAtIndex:(unsigned long long)arg1 URL:(id *)arg2;
- (struct _NSRange)rangeOfAnchorNamed:(id)arg1;
- (struct _NSRange)rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)_rangeOfObject:(id)arg1 inArrayBehindAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)textAttachmentsWithPredicate:(id)arg1 class:(Class)arg2;
@end

