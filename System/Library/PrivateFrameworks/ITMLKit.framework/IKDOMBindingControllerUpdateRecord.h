/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IKDOMBindingControllerUpdateRecord : NSObject {

	BOOL _cancelled;
	/*^block*/id _preUpdate;
	/*^block*/id _update;

}

@property (nonatomic,copy) id preUpdate;                                     //@synthesize preUpdate=_preUpdate - In the implementation block
@property (nonatomic,copy) id update;                                        //@synthesize update=_update - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(id)update;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)preUpdate;
-(void)setPreUpdate:(id)arg1 ;
-(void)setUpdate:(id)arg1 ;
@end

