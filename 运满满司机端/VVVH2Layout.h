//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VVLayout.h"

@interface VVVH2Layout : VVLayout
{
    _Bool _updatingNeedsResize;
    unsigned long long _orientation;
}

@property(nonatomic) _Bool updatingNeedsResize; // @synthesize updatingNeedsResize=_updatingNeedsResize;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
- (struct CGSize)calculateSize:(struct CGSize)arg1;
- (void)horizontal;
- (void)vertical;
- (void)layoutSubNodes;
- (_Bool)needResizeIfSubNodeResize;
- (_Bool)setIntValue:(int)arg1 forKey:(int)arg2;
- (id)init;

@end

