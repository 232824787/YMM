//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAShape.h"

#import "MAOverlay.h"

@class NSString, UIImage;

@interface MAObjModelOverlay : MAShape <MAOverlay>
{
    struct MA3DModelObjFileParser *_objModelFileParser;
    double _rotationDegree;
    double _altitude;
    double _sideLength;
    UIImage *_textureImage;
    struct CLLocationCoordinate2D _coordinate;
    struct MAMapRect _boundingMapRect;
}

+ (id)objModelOverlayWithCoordinate:(struct CLLocationCoordinate2D)arg1 objModelData:(id)arg2 textureImage:(id)arg3;
@property(retain, nonatomic) UIImage *textureImage; // @synthesize textureImage=_textureImage;
@property(nonatomic) double sideLength; // @synthesize sideLength=_sideLength;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double rotationDegree; // @synthesize rotationDegree=_rotationDegree;
@property(nonatomic) struct MAMapRect boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (void *)objModelFileParser;
- (void)constructBoundingMapRect;
- (void)parseObjModelData:(id)arg1;
- (void)initProperties;
- (void)dealloc;
- (id)initObjModelOverlayWithCoordinate:(struct CLLocationCoordinate2D)arg1 objModelData:(id)arg2 textureImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

