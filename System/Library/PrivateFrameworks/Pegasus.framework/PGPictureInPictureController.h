/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PGPictureInPictureRemoteObjectDelegate.h>

@protocol OS_dispatch_queue, PGPictureInPictureControllerDelegate;
@class NSMutableSet, NSXPCListener, NSObject, PGPictureInPictureRemoteObject, NSSet, PGPictureInPictureApplication, NSString;

@interface PGPictureInPictureController : NSObject <NSXPCListenerDelegate, PGPictureInPictureRemoteObjectDelegate> {

	NSMutableSet* _pictureInPictureRemoteObjects;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _listenerQueue;
	PGPictureInPictureRemoteObject* _activePictureInPictureRemoteObject;
	PGPictureInPictureRemoteObject* _suspenedPictureInPictureRemoteObject;
	id<PGPictureInPictureControllerDelegate> _delegate;
	SCD_Struct_PG0 _delegateRespondsTo;
	BOOL _pictureInPictureActive;
	NSSet* _pictureInPictureApplications;
	PGPictureInPictureApplication* _activePictureInPictureApplication;

}

@property (getter=isPictureInPictureActive,nonatomic,readonly) BOOL pictureInPictureActive;                    //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (nonatomic,readonly) NSSet * pictureInPictureApplications;                                           //@synthesize pictureInPictureApplications=_pictureInPictureApplications - In the implementation block
@property (nonatomic,readonly) PGPictureInPictureApplication * activePictureInPictureApplication;              //@synthesize activePictureInPictureApplication=_activePictureInPictureApplication - In the implementation block
@property (nonatomic,readonly) BOOL isStartingStoppingOrCancellingPictureInPicture; 
@property (assign,nonatomic,__weak) id<PGPictureInPictureControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPictureInPictureSupported;
-(id)init;
-(id<PGPictureInPictureControllerDelegate>)delegate;
-(void)setDelegate:(id<PGPictureInPictureControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isPictureInPictureActive;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)isStartingStoppingOrCancellingPictureInPicture;
-(id)_remoteObjectThatShouldStartPictureInPictureEnteringBackgroundForPictureInPictureApplication:(id)arg1 ;
-(void)pictureInPictureInterruptionBegan;
-(void)pictureInPictureInterruptionEnded;
-(BOOL)_pictureInPictureRemoteObjectIsFaceTime:(id)arg1 ;
-(BOOL)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)arg1 ;
-(void)pictureInPictureRemoteObject:(id)arg1 didCreatePictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureRemoteObject:(id)arg1 willShowPictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureRemoteObject:(id)arg1 didShowPictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureRemoteObject:(id)arg1 willHidePictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureRemoteObject:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2 ;
-(BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1 ;
-(void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSSet *)pictureInPictureApplications;
-(PGPictureInPictureApplication *)activePictureInPictureApplication;
@end

