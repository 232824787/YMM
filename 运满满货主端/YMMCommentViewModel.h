//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMCommentViewModel : NSObject
{
}

- (void)deleteTransportCommentWithCommentId:(id)arg1 WithCompHander:(CDUnknownBlockType)arg2;
- (void)modifyTransportCommentTypeToGood:(id)arg1 WithCompHander:(CDUnknownBlockType)arg2;
- (void)updateUserCommentListWithUserId:(id)arg1 after:(id)arg2 score:(id)arg3 tagId:(id)arg4 WithCompHander:(CDUnknownBlockType)arg5;
- (void)updatePublishCommentListAfter:(id)arg1 WithCompHander:(CDUnknownBlockType)arg2;
- (void)updateReceivedCommentList:(long long)arg1 After:(id)arg2 WithCompHander:(CDUnknownBlockType)arg3;
- (void)getCommentInfoWithUserId:(id)arg1 WithCompHander:(CDUnknownBlockType)arg2;
- (void)showToastWithPoints:(long long)arg1 title:(id)arg2 dismiss:(CDUnknownBlockType)arg3;
- (void)sendPointSaveTaskWithOrderId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)commitCommentByModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)commitUpdateCommentByModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

