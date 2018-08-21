/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSBundleODRDataCommon.h>

@protocol OS_dispatch_group;
@class NSDictionary, NSMutableSet, NSObject, NSString;

@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon {

	NSDictionary* _tagToTagState;
	NSMutableSet* _extensionConnections;
	NSObject*<OS_dispatch_group> _initialStateGroup;
	NSString* _rootSandboxPath;

}
+(id)dataForBundle:(id)arg1 createIfRequired:(BOOL)arg2 ;
-(void)assetPacksBecameAvailable:(id)arg1 ;
-(void)assetPacksBecameUnavailable:(id)arg1 ;
-(void)_waitForDaemon;
-(void)addExtensionEndpoint:(id)arg1 ;
-(double)preservationPriorityForTag:(id)arg1 ;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithBundle:(id)arg1 ;
@end

