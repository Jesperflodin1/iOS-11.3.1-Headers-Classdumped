/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class LSApplicationWorkspace, NSExtension, NSUUID, NSString;

@interface CRKInstructorExtensionProxy : NSObject <LSApplicationWorkspaceObserverProtocol> {

	LSApplicationWorkspace* mWorkspace;
	NSExtension* mInstructorExtension;
	NSUUID* mContextIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedExtensionProxy;
-(id)init;
-(void)dealloc;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)resetExtension;
-(void)_fetchListenerEndpointWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)proxiesContainClassroomApp:(id)arg1 ;
-(void)fetchListenerEndpointWithCompletionBlock:(/*^block*/id)arg1 ;
@end

