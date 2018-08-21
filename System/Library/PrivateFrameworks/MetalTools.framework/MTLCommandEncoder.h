/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLCommandEncoder <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@required
-(void)insertDebugSignpost:(id)arg1;
-(void)endEncoding;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(void)pushDebugGroup:(id)arg1;
-(void)popDebugGroup;
-(id<MTLDevice>)device;

@end

