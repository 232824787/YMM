//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTKeyframeGroup, NSString;

@interface LOTShapeRectangle : NSObject
{
    _Bool _reversed;
    NSString *_keyname;
    LOTKeyframeGroup *_position;
    LOTKeyframeGroup *_size;
    LOTKeyframeGroup *_cornerRadius;
}

@property(readonly, nonatomic) _Bool reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic) LOTKeyframeGroup *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) LOTKeyframeGroup *size; // @synthesize size=_size;
@property(readonly, nonatomic) LOTKeyframeGroup *position; // @synthesize position=_position;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

