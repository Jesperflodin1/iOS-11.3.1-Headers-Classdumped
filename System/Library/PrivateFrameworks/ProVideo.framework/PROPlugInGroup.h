/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PROPlugInGroup : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)name;
-(id)displayName;
-(CFUUIDRef)uuid;
-(id)plugIns;
-(void)addPlugIn:(id)arg1 ;
-(id)plugInsForProtocols:(id)arg1 ;
-(void)removePlugIn:(id)arg1 ;
-(id)initWithUUID:(CFUUIDRef)arg1 name:(id)arg2 bundle:(id)arg3 ;
@end
