//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (DTFoundation)
+ (id)imageWithContentsOfURL:(id)arg1 cachePolicy:(unsigned long long)arg2 error:(id *)arg3;
+ (id)imageWithSolidColor:(id)arg1 size:(struct CGSize)arg2;
- (id)imageScaledToSize:(struct CGSize)arg1;
- (id)tileImageInClipRect:(struct CGRect)arg1 inBounds:(struct CGRect)arg2 scale:(double)arg3;
- (id)tileImageAtColumn:(unsigned long long)arg1 ofColumns:(unsigned long long)arg2 row:(unsigned long long)arg3 ofRows:(unsigned long long)arg4;
- (void)drawInRect:(struct CGRect)arg1 withContentMode:(long long)arg2;
- (id)imageMaskedAndTintedWithColor:(id)arg1;
@end

