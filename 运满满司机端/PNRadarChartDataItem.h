//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PNRadarChartDataItem : NSObject
{
    double _value;
    NSString *_textDescription;
}

+ (id)dataItemWithValue:(double)arg1 description:(id)arg2;
@property(copy, nonatomic) NSString *textDescription; // @synthesize textDescription=_textDescription;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;

@end

