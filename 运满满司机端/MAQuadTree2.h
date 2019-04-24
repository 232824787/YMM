//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock;

@interface MAQuadTree2 : NSObject
{
    struct MAQuadTreeNode *_rootNode;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)clean;
- (unsigned long long)count;
- (id)annotationsInBoundingBox:(struct MAMapRect)arg1 limitArea:(double)arg2;
- (id)annotationsInBoundingBox:(struct MAMapRect)arg1;
- (void)addAnnotations:(id)arg1;
@property(readonly, nonatomic) struct MAMapRect boundingBox;
- (void)initializeWithBoundingBox:(struct MAMapRect)arg1;
- (id)init;
- (id)initWithBoundingBox:(struct MAMapRect)arg1;

@end

