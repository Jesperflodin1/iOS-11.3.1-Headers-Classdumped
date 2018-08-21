/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PROPlugInManager.h>
#import <libobjc.A.dylib/PROVersionedAPIAccess.h>
#import <libobjc.A.dylib/PROBundleHandlerDelegate.h>

@class NSMutableDictionary, NSMutableArray, PROReadWriteLock, NSRecursiveLock, NSString;

@interface PROConcretePlugInManager : PROPlugInManager <PROVersionedAPIAccess, PROBundleHandlerDelegate> {

	NSMutableDictionary* protocols;
	NSMutableDictionary* groupsDictionary;
	NSMutableDictionary* bundlesDictionary;
	NSMutableDictionary* uuids;
	NSMutableDictionary* classesDictionary;
	NSMutableArray* plugIns;
	NSMutableDictionary* api;
	PROReadWriteLock* apiLock;
	NSMutableArray* plugInSearchDirectories;
	NSMutableDictionary* blockedLibraryPlugins;
	NSMutableDictionary* blockedDocumentPlugins;
	id delegate;
	struct {
		unsigned respondsToDidError : 1;
		unsigned respondsToDidPlugInDidError : 1;
		unsigned respondsToShouldLoadBundle : 1;
		unsigned respondsToShouldLoadPlugIn : 1;
		unsigned respondsToDidLoadPlugIn : 1;
		unsigned useStrictLoading : 1;
	}  managerFlags;
	NSRecursiveLock* mutex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned)arg3 ;
-(void)scanForPlugInsInBundle:(id)arg1 ;
-(void)addPlugInSearchDirectory:(id)arg1 ;
-(id)newBlockPluginList:(CFStringRef)arg1 ;
-(BOOL)checkPluginVersionAgainstBlockList:(id)arg1 blockDict:(id)arg2 ;
-(id)plugIns;
-(void)addPlugIn:(id)arg1 ;
-(void)mergeGroupsDictionaryWith:(id)arg1 ;
-(void)scanForPlugInsInDirectory:(id)arg1 ;
-(BOOL)shouldLoadBundle:(id)arg1 ;
-(void)scanForPlugInsInBundleHelper:(id)arg1 zone:(NSZone*)arg2 withPluginKitPlugIn:(id)arg3 ;
-(BOOL)shouldLoadPlugIn:(id)arg1 ;
-(BOOL)requiresProtocolsToBePresentWhenLoading;
-(id)apiForProtocol:(id*)arg1 versions:(id)arg2 ;
-(BOOL)validateProtocols:(id)arg1 ;
-(BOOL)bundleHandler:(id)arg1 shouldAddPlugIn:(id)arg2 ;
-(void)bundleHandler:(id)arg1 didAddPlugIn:(id)arg2 ;
-(void)bundleHandler:(id)arg1 didError:(id)arg2 ;
-(void)setRequiresProtocolsToBePresentWhenLoading:(BOOL)arg1 ;
-(void)setPlugInSearchDirectories:(id)arg1 ;
-(void)insertObject:(id)arg1 inPlugInSearchDirectoriesAtIndex:(unsigned)arg2 ;
-(void)removeObjectFromPlugInSearchDirectoriesAtIndex:(unsigned)arg1 ;
-(id)plugInSearchDirectories;
-(void)removeAllPlugIns;
-(void)addLibraryBlockedPlugin:(id)arg1 bundleName:(id)arg2 pluginName:(id)arg3 version:(id)arg4 ;
-(void)addDocumentBlockedPlugin:(id)arg1 ;
-(BOOL)checkIfShouldBlockPlugin:(id)arg1 returnPluginDictionary:(id*)arg2 ;
-(void)getNameOverrides:(id)arg1 pluginName:(id*)arg2 bundleName:(id*)arg3 ;
-(void)removeAllBlockedDocumentPlugins;
-(void)scanForPlugIns;
-(void)scanForPlugInsInBundle:(id)arg1 withPluginKitPlugIn:(id)arg2 ;
-(id)plugInGroups;
-(id)plugInGroupsMutable;
-(id)plugInWithUUID:(CFUUIDRef)arg1 ;
-(id)plugInWithClassName:(id)arg1 ;
-(id)plugInGroupWithUUID:(CFUUIDRef)arg1 ;
-(id)blockedLibraryPlugins;
-(id)blockedDocumentPlugins;
-(unsigned)countOfBundles;
-(id)objectInBundlesAtIndex:(unsigned)arg1 ;
-(id)plugInsForProtocol:(id)arg1 ;
-(id)plugInsForProtocols:(id)arg1 ;
-(void)unregisterAPIForProtocol:(id)arg1 version:(unsigned)arg2 ;
-(void)unregisterAPIForProtocol:(id)arg1 ;
-(void)reportError:(id)arg1 ;
@end

