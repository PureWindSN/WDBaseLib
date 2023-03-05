//
//  DeviceInfo.h
//  Hola
//
//  Created by wind on 2022/12/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDBaseDevice : NSObject

#pragma mark - related to system
//系统名称
+ (NSString *)getDeviceSystemName;

//系统版本号
+ (NSString *)getDeviceSystemVersion;

//设备用户名称
+ (NSString *)getDeviceSettingName;

//设备机型
+ (NSString *)getDeviceTypeString;

//设备类型名称
+ (NSString *)getDeviceModel;

//设备内部编号
+ (NSString *)getDeviceMachine;

////磁盘内存
//+ (CGFloat)getDeviceTotalDisk;
//
////磁盘剩余内存
//+ (CGFloat)getDeviceFreeDisk;

//设备CPU个数
+ (NSInteger)getDeviceCPUNum;

//是否模拟器
+ (BOOL)deviceIsSimulator;

//iPhone中SIM卡的个数
- (int)getSimCountInPhone;


+ (NSString *)getSerialNumber;

// language en
+ (NSString*)getPreferredLanguage;

+ (NSString*)getLocaleDisplayLanguagee;

//获取当前地区的代码
+ (NSString *)getAreaCode;

// 开机时间到现在的毫秒数（包括睡眠时间）
+ (long)getSystemTotalUptime;

// 从开机到现在的毫秒数（不包括睡眠时间
+ (long)getSystemAliveUptime;

@end

@interface WDBaseDevice (Security)
#pragma mark - Related to security
// Is jail broken
+ (BOOL)isJailbroken;

+ (BOOL)isOpenTheProxy;

+ (BOOL)isVPNOn;

// Is proxy
+ (BOOL)deviceIsUseProxy;

@end

@interface WDBaseDevice (DeviceIdentifier)
#pragma mark - Related to device identifier

// Device id about advertisement.
+ (NSString *)getDeviceIDFA;

// Device id
+ (NSString *)getDeviceIDFV;

// Random uuid
+ (NSString *)getDeviceUUID;

+ (NSString *)getMacAddress;

@end

@interface WDBaseDevice (ScreenResolution)
#pragma mark - Screen resolution

+ (NSString *)getScreenResolution;

+ (NSString *)getScreenResolutionHeight;

+ (NSString *)getScreenResolutionWidth;

// Physical size. Eg: 6.5、6.etc
+ (NSString *)getPhysicalSize;

// 设备屏幕尺寸
+ (NSString *)getDeviceLogicalScreenSize;

@end

@interface WDBaseDevice (Battery)
#pragma mark - Related to battery
// 设备电量 电池百分比    70
+ (NSString *)getDeviceBatteryLevel;

+ (BOOL)getDeviceBatteryChargingState;

@end

@interface WDBaseDevice (Carrier)
#pragma mark - Related to carrier
+ (NSString *)getCarrierName;

+ (NSString *)getCountryCode;

+ (NSString *)getNetworkCode;

+ (NSString *)getNetworkType;

+ (NSString *)getTimezone;

// Phone network signal stength
+ (NSString *)getCarrierSignalStrength;

@end

@interface WDBaseDevice (WiFi)
#pragma mark - Related to wifi
+ (NSString *)getWiFiMac;

//+ (NSString *)getWiFiSsid;

+ (NSString *)getWiFiSsid;

// Is wifi enabled
+ (BOOL)deviceisWiFiEnabled;

+ (BOOL)isWifiConnection;

// ip address
+ (NSString *)getIPAddress;

@end

@interface WDBaseDevice (Disk)
#pragma mark - Related to disk
// Disk storage size
+ (NSString *)getTotalDiskSpace;

// Unuse disk storage size
+ (NSString *)getFreeDiskSpace;

@end

@interface WDBaseDevice (Memory)
#pragma mark - Related to memory

// Total memory
+ (NSString *)getDeviceTotalMemory;

// Current available memory
+ (NSString *)getAvailableMemorySize;

// Active memory
+ (NSString *)getActiveMemory;

// Inactive memory
+ (NSString *)getInActiveMemory;

// Wired memory, applicatin can't alloc
+ (NSString *)getWiredMemory;

// Used memory
+ (NSString *)getUsedMemory;

// Purgable memory
+ (NSString *)getPurgableMemory;

@end

NS_ASSUME_NONNULL_END
