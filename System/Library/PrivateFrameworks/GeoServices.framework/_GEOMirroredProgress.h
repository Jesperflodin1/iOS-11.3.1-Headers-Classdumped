/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {

	NSProgress* _originalProgress;

}
-(id)initWithMirroredProgress:(id)arg1 ;
-(id)_initWithMirroredProgressForSubclasses:(id)arg1 ;
-(void)_registerForKVO;
-(void)_unregisterForKVO;
-(void)_replaceObservedProgressWith:(id)arg1 ;
-(void)dealloc;
-(void)_update;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

