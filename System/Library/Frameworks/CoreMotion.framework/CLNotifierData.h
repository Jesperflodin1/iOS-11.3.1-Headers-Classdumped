/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLNotifierData : NSObject {

	void* _data;
	/*^block*/id _destructor;

}

@property (assign,nonatomic) void* data;               //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id destructor;              //@synthesize destructor=_destructor - In the implementation block
-(id)initWithData:(void*)arg1 destructor:(/*^block*/id)arg2 ;
-(void)setDestructor:(id)arg1 ;
-(id)destructor;
-(void)dealloc;
-(void*)data;
-(void)setData:(void*)arg1 ;
@end

