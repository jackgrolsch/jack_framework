// F3 Functions

class F // Defines the "owner"
{
	class common // category
	{
		file = "f\common";
		class processParamsArray{preInit = 1; postInit=1;};
		class nearPlayer{};
	};
	class mpEnd
	{
		file = "f\mpEnd";
		class mpEnd{};
		class mpEndReceiver{};
	};
	class setGroupID
	{
		file = "f\setGroupID";
		class setGroupID{};
	};
	class groupMarkers {
		file = "f\groupMarkers";
		class localGroupMarker{};
		class localSpecialistMarker{};
	};
	class bodyRemoval
	{
		file = "f\removeBody";
		class removeBody{};
	};
	class zeus
	{
		file = "f\zeus";
		class zeusInit{};
		class zeusAddAddons{};
		class zeusAddObjects{};
	};
	class tfr
	{
		file = "f\radios\tfr";
		class tfr_removeRadios{};
		class tfr_addRadios{};
		class tfr_setRadioFrequencies{};
		class tfr_configureSpectatorChat{};
	};
	class safeStart
	{
		file = "f\safeStart";
		class safety{};
	};
	class fspectator
	{
		file = "f\spect";
		class CamInit{};
		class OnUnload{};
		class DrawTags{};
		class EventHandler{};
		class FreeCam{};
		class GetPlayers{};
		class ReloadModes{};
		class UpdateValues{};
		class HandleCamera{};
		class ToggleGUI{};
		class OnMapClick{};
		class DrawMarkers{};
		class ForceExit{};
		class HandleMenu{};
		class showMenu{};
	};
};