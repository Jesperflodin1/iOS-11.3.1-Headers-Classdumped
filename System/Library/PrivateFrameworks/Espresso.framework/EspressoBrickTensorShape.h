/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EspressoBrickTensorShape : NSObject {

	int _width;
	int _height;
	int _channels;
	int _batch;
	int _sequence;

}

@property (assign) int width;                 //@synthesize width=_width - In the implementation block
@property (assign) int height;                //@synthesize height=_height - In the implementation block
@property (assign) int channels;              //@synthesize channels=_channels - In the implementation block
@property (assign) int batch;                 //@synthesize batch=_batch - In the implementation block
@property (assign) int sequence;              //@synthesize sequence=_sequence - In the implementation block
-(int)height;
-(int)channels;
-(int)width;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(int)batch;
-(void)setBatch:(int)arg1 ;
-(void)setChannels:(int)arg1 ;
-(void)setSequence:(int)arg1 ;
-(int)sequence;
@end

