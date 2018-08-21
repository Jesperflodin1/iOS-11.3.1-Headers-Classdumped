/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/CommonProduct.h>

@interface tm53972ad9731c7b39eca2360f2cc4f798 : CommonProduct {

	int _filteredTempRearCameraDie;
	int _filteredTempMic1;
	int _filteredTempMic1_2DGrid;
	int _filteredTempMic2;

}
-(void)updateAllThermalLoad:(BOOL)arg1 ;
-(int)gasGaugeBatteryTemperature;
-(void)postDeviceTempMetric:(int)arg1 ;
-(id)getGridX;
-(id)getGridY;
-(id)initProduct:(id)arg1 ;
-(int*)compute2DGridTemps;
-(void)updateAggdInfo;
-(int)arcModuleTemperature;
-(void)resetVTFilterState;
-(int)arcVirtualTemperature;
@end

