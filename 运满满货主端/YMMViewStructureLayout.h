//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface YMMViewStructureLayout : NSObject
{
    NSString *_viewName;
    NSArray *_frame;
    NSArray *_eventTypes;
    NSString *_elementId;
    NSArray *_children;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(copy, nonatomic) NSString *elementId; // @synthesize elementId=_elementId;
@property(copy, nonatomic) NSArray *eventTypes; // @synthesize eventTypes=_eventTypes;
@property(copy, nonatomic) NSArray *frame; // @synthesize frame=_frame;
@property(copy, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
- (void).cxx_destruct;
- (id)init;

@end

