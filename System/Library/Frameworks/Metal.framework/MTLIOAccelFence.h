/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLFence.h>

@protocol MTLDevice;
@class NSString, MTLIOAccelDevice;

@interface MTLIOAccelFence : NSObject <MTLFence> {

	MTLIOAccelDevice*<MTLDevice> _device;
	unsigned _fenceIndex;
	NSString* _label;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label;                                  //@synthesize label=_label - In the implementation block
-(id)initWithDevice:(id)arg1 fenceIndex:(unsigned)arg2 ;
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
@end

