/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSBrightnessController : NSObject {

	/*^block*/id _isTracking;
	/*^block*/id _brightnessChangedExternally;

}

@property (nonatomic,copy) id isTracking;                               //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,copy) id brightnessChangedExternally;              //@synthesize brightnessChangedExternally=_brightnessChangedExternally - In the implementation block
+(id)sharedController;
-(id)isTracking;
-(void)setIsTracking:(id)arg1 ;
-(id)brightnessChangedExternally;
-(void)setBrightnessChangedExternally:(id)arg1 ;
@end

