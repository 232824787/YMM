//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VVLayout.h"

@interface VVFrameLayout : VVLayout
{
    _Bool _updatingNeedsResize;
    unsigned long long _gravity;
}

@property(nonatomic) _Bool updatingNeedsResize; // @synthesize updatingNeedsResize=_updatingNeedsResize;
@property(nonatomic) unsigned long long gravity; // @synthesize gravity=_gravity;
- (struct CGSize)calculateSize:(struct CGSize)arg1;
- (void)layoutSubNodes;
- (_Bool)setIntValue:(int)arg1 forKey:(int)arg2;
- (id)init;

@end

