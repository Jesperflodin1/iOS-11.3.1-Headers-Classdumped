/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderJob.h>

@protocol NUVideoProperties;
@interface NUVideoPropertiesJob : NURenderJob {

	id<NUVideoProperties> _videoProperties;

}
-(id)result;
-(BOOL)prepare:(out id*)arg1 ;
-(BOOL)wantsRenderStage;
-(BOOL)wantsCompleteStage;
@end

