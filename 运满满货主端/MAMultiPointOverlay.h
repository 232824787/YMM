//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAShape.h"

#import "MAOverlay.h"

@class MAQuadTree2, NSArray, NSString;

@interface MAMultiPointOverlay : MAShape <MAOverlay>
{
    MAQuadTree2 *_quadTree;
    NSArray *_items;
    struct MAMapRect _boundingRect;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) struct MAMapRect boundingRect; // @synthesize boundingRect=_boundingRect;
- (void).cxx_destruct;
- (void)buildQuadTree;
- (void)calculateBoundingMapRect;
- (id)itemsInMapRect:(struct MAMapRect)arg1 limitArea:(double)arg2;
- (id)initWithMultiPointItems:(id)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) struct MAMapRect boundingMapRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

