# TFIT

# How To use
1. Create a new plugin and Call it "TFIT_<Your_ModName>"
2. Restart your engine
3. In your "TFIT_<You_ModName>", Create a User Widget and change it's parent class to "TFITWidget"
4. (Customize your widget the way you like it)
5. Go back into your original Mod and inside your Buildables Add TFITDescription Component 
6. In the TFITDescription Component details add your TFITWidget to the MoreInfo Array
7. update your TFIT_<Your_ModName>.unplugin file, see below on how your TFIT_<Your_ModName>.uplugin file should look
8. Done!

# TFIT_<You_ModName>.Uplugin Example
```
{
	"FileVersion": 3,
	"Version": 1,
	"SemVersion": "1.0.0",
	"VersionName": "1.0",
	"FriendlyName": "TFIT_ItemTeleporter",
	"Description": "",
	"Category": "Other",
	"CreatedBy": "Blockout22",
	"CreatedByURL": "",
	"DocsURL": "",
	"MarketplaceURL": "",
	"SupportURL": "",
	"CanContainContent": true,
	"IsBetaVersion": false,
	"IsExperimentalVersion": false,
	"Installed": false,
	"Plugins": [
		{
			"Enabled": true,
			"Name": "SML",
			"SemVersion": "^3.1.1",
			"bIsOptional": false
		},
		{
			"Enabled": true,
			"Name": "TFIT",
			"SemVersion": "^1.0.1",
			"bIsOptional": false
		},
		{
			"Enabled": true,
			"Name": "StorageTeleporter", 
			"SemVersion": "^1.0.0",
			"bIsOptional": false
		}
	]
}
```

# FAQ

### Does my main mod need to depend on TFIT?
Your main mod doesn't need to depend on TFIT but your "TFIT_<You_ModName>" does have to depend on TFIT

### What happend if the user uninstalls TFIT, will my main mod stop working?
No, See above question.
 
