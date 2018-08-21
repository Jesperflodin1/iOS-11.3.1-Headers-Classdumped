/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CRKUsageStatistics : NSObject
+(void)incrementKey:(id)arg1 ;
+(void)pushDouble:(double)arg1 forKey:(id)arg2 ;
+(void)logWillAutomaticallyJoinCourses:(BOOL)arg1 ;
+(void)logDidAcceptJoinCourse;
+(void)logDidDenyJoinCourse;
+(void)logDidModifyPermission;
+(void)logDidAllowAction;
+(void)logDidDenyAction;
+(void)logDidShareDocument;
+(void)logDidShareLink;
+(void)logDidSuccessfullyEnroll;
+(void)logDidEnterInvalidEnrollmentPin;
+(void)logDidFailEnrollment;
+(void)resetConfigurationCounts;
+(void)logDidDeleteCourse;
+(void)logCourseCount:(unsigned long long)arg1 ;
+(void)clearDistributionKey:(id)arg1 ;
@end
