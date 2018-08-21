/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskDependencyDescription.h>

@class __NSURLSessionTaskDependencyResourceIdentifier;

@interface __NSCFURLSessionTaskDependencyDescription : NSURLSessionTaskDependencyDescription {

	float _priority;
	BOOL _exclusive;
	__NSURLSessionTaskDependencyResourceIdentifier* _dependent;
	__NSURLSessionTaskDependencyResourceIdentifier* _parent;

}
-(id)initWithURLPath:(id)arg1 mimeType:(id)arg2 parentURLPath:(id)arg3 parentMimeType:(id)arg4 priority:(float)arg5 exclusive:(BOOL)arg6 ;
-(void)set_dependent:(id)arg1 ;
-(void)set_parent:(id)arg1 ;
-(id)initWithPriority:(float)arg1 exclusive:(BOOL)arg2 ;
-(id)_dependent;
-(void)dealloc;
-(id)description;
-(id)_parent;
-(void)setPriority:(float)arg1 ;
-(float)priority;
-(void)setExclusive:(BOOL)arg1 ;
-(BOOL)exclusive;
@end

