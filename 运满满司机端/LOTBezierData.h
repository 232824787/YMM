//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LOTBezierData : NSObject
{
    struct CGPoint *_vertices;
    struct CGPoint *_inTangents;
    struct CGPoint *_outTangents;
    _Bool _closed;
    long long _count;
}

@property(readonly, nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
- (struct CGPoint)_vertexAtIndex:(long long)arg1 inArray:(id)arg2;
- (void)initializeData:(id)arg1;
- (struct CGPoint)outTangentAtIndex:(long long)arg1;
- (struct CGPoint)inTangentAtIndex:(long long)arg1;
- (struct CGPoint)vertexAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

