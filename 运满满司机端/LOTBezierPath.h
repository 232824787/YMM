//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LOTBezierPath : NSObject
{
    struct LOT_Subpath *headSubpath_;
    struct LOT_Subpath *tailSubpath_;
    struct CGPoint subpathStartPoint_;
    double *_lineDashPattern;
    long long _lineDashCount;
    double _lineDashPhase;
    struct CGPath *_path;
    _Bool _cacheLengths;
    _Bool _usesEvenOddFillRule;
    int _lineCapStyle;
    int _lineJoinStyle;
    double _length;
    double _lineWidth;
    double _miterLimit;
    double _flatness;
}

+ (id)newPath;
+ (id)pathWithCGPath:(struct CGPath *)arg1;
@property(nonatomic) _Bool usesEvenOddFillRule; // @synthesize usesEvenOddFillRule=_usesEvenOddFillRule;
@property(nonatomic) double flatness; // @synthesize flatness=_flatness;
@property(nonatomic) double miterLimit; // @synthesize miterLimit=_miterLimit;
@property(nonatomic) int lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property(nonatomic) int lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) _Bool cacheLengths; // @synthesize cacheLengths=_cacheLengths;
- (void)lot_enumeratePath:(struct CGPath *)arg1 elementsUsingBlock:(CDUnknownBlockType)arg2;
- (void)setWithCGPath:(struct CGPath *)arg1;
- (void)trimPathFromT:(double)arg1 toT:(double)arg2 offset:(double)arg3;
- (void)LOT_appendPath:(id)arg1;
- (void)LOT_applyTransform:(struct CGAffineTransform)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, getter=isEmpty) _Bool empty;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)LOT_removeAllPoints;
- (void)_clearPathData;
- (void)LOT_closePath;
- (void)LOT_addCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)LOT_addLineToPoint:(struct CGPoint)arg1;
- (void)LOT_moveToPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct LOT_Subpath *headSubpath;
@property(readonly, nonatomic) const struct CGPath *CGPath;
@property(readonly, nonatomic) struct CGPoint currentPoint;
- (void)addSubpathWithType:(int)arg1 length:(double)arg2 endPoint:(struct CGPoint)arg3 controlPoint1:(struct CGPoint)arg4 controlPoint1:(struct CGPoint)arg5;
- (void)removeAllSubpaths;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

